//
// HackerRank folio
// solved by Michael Gene Brockus
//
#ifndef TROGLOBYTE_PACKAGE_HPP
#define TROGLOBYTE_PACKAGE_HPP

//
// Macros to control the visibility of functions provided by this package
//
#ifdef BUILDING_TROGLO_PACKAGE
#define TROGLOBYTE_PUBLIC __attribute__((visibility("default")))
#else
#define TROGLOBYTE_PUBLIC
#endif

//
//   PUBLIC APPLICATION INTERFACE
// --------------------------------
//
// Published package with provided public application interface for
// use in the users application. Please note that we are internationally
// targeting c++20 standard.
//

namespace trog
{
    TROGLOBYTE_PUBLIC const char *greet(void);

} // namespace trog

#endif // end of TROGLOBYTE_PACKAGE_H
