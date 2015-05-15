#include "optionException.hpp"

template<class T>
class Option {
  bool isDefined;
  T x;

public:

  Option(T t, bool d) :
    x(t),
    isDefined(d)
  { }

  T get() {
    if( isSome() ) {
      return x;
    } else {
      throw noneGetEx;
    }
  }

  T getOrElse(T orElse) {
    if( isSome() ) {
      return x;
    } else {
      return orElse;
    }
  }

  bool isNone() {
    return ! isDefined;
  }

  bool isSome() {
    return isDefined;
  }

  bool isEmpty() {
    return ! isDefined;
  }
};

template<class T>
Option<T> Some(T t) {
  return Option<T>(t, true);
}

template<class T>
Option<T> None() {
  return Option<T>(T(), false);
}
