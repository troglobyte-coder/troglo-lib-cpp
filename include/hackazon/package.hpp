//
// file: package.hpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>

#ifndef HACKAZON_PACKAGE_HPP
#define HACKAZON_PACKAGE_HPP

//
// Macros to control the visibility of functions provided by this package
//
#ifdef BUILDING_HACKAZON_PACKAGE
#define HACKAZON_PUBLIC __attribute__((visibility("default")))
#else
#define HACKAZON_PUBLIC
#endif

//
//   PUBLIC APPLICATION INTERFACE
// --------------------------------
//
// Published package with provided public application interface for
// use in the users application. Please note that we are internationally
// targeting c++20 standard.
//

namespace hak
{
    HACKAZON_PUBLIC const char *greet(void);
} // namespace bunny

#endif // end of HACKAZON_PACKAGE_H
