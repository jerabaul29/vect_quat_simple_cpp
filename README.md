# vect_quat_simple_cpp: vector and quaternion in C++, the simple way

The aim of this repo is to provide simple and effective vector and quaternion operations. My initial motivation was for performing some rotation operations on IMU data on microcontrollers. At the time of writing this (early 2021), I could not find a library that was both complete, simple, lightweight, but still had some advanced C++ properties such as templating.

## Main features

- Fully templated.
- Simple, "C-style" API to give full control over what is done, and avoid unexpected copies and temporary objects - especially important on microcontrollers and their likes.
- Effective methods available, such as using the Rodriguez method for performing rotation using quaternions.
- Unit-tested.
- Cheat-sheets for reminding of the main mathematical properties used for implementing.

