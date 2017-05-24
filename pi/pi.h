#ifndef PI_H_INCLUDED
#define PI_H_INCLUDED

/* export macros for library generated by CMake */
#ifndef PI_API
#include "pi_cpp_export.h"
#define PI_API PI_CPP_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

PI_API
double approximate_pi_c(const int num_points);

PI_API
double approximate_pi_fortran(const int num_points);

#ifdef __cplusplus
}
#endif

#endif /* PI_H_INCLUDED */
