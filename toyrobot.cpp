#include "toyrobot.hpp"
#include <iostream>
#include <regex>
#include <string>

void noop() {}

int main () {
  using namespace std;
  regex move ("^MOVE$");
  regex left ("^LEFT$");
  regex right ("^RIGHT$");
  regex report ("^REPORT$");
  regex place ("^PLACE (\\d),(\\d),(NORTH|EAST|SOUTH|WEST)$");

  Robot robot = Robot();
  Option<Table> table = Some(Table(Point(0,0),Point(4,4)));

  smatch sm;
  string line;
  while (getline(cin, line))
  {
        regex_match (line,move) ? robot.move() :
        regex_match (line,left) ? robot.left() :
        regex_match (line,right) ? robot.right() :
        regex_match (line,report) ? robot.report() :
        regex_match (line,sm,place) ? robot.place(Point(stoi(sm[1]), stoi(sm[2])), 0.5, table) :
        noop();
  }
}
