#ifndef VQS_MATH_FUNCTIONS
#define VQS_MATH_FUNCTIONS

// we need to provide some math functions; this may be from different sources
// if we are inside an Arduino

#ifdef ARDUINO
  #include "Arduino.h"
#else
  #include "math.h"
  using std::sqrt;
  using std::abs;
#endif

#endif
