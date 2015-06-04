#include "toyrobot.hpp"
#include <iostream>
#include <regex>
#include <string>
#include <map>

int main () {
  // Trust me, it won't hurt at all.
  using namespace std;

  // For such a simple case this is probably simpler than writing code to generate
  // the maps and regex
  map<string,int> dirtoi = {{"NORTH", 0}, {"EAST", 1}, {"SOUTH", 2}, {"WEST", 3}};
  map<int,string> itodir = {{0, "NORTH"}, {1, "EAST"}, {2, "SOUTH"}, {3, "WEST"}};
  regex place("^PLACE (\\d),(\\d),(NORTH|EAST|SOUTH|WEST)$");

  Robot robot = Robot();
  Option<Table> table = Some(Table(Point(0,0),Point(4,4)));

  smatch m;
  string l;
  while (getline(cin, l))
  {
        // Probably inefficient but I think reasonably readable.
        l == "MOVE" ? robot.move() :
        l == "LEFT" ? robot.left() :
        l == "RIGHT" ? robot.right() :
        l == "REPORT" ? robot.report(itodir) :
        regex_match (l,m,place) ? robot.place(Point(stoi(m[1]), stoi(m[2]))
                                                , dirtoi.at(m[3])/2.0, table) :
        (void)0;
  }
}
