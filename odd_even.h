#pragma once
#ifndef _odd_even_h
#define _odd_even_h

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _odd_even_h_inline
#if defined(__cplusplus) || (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L)
#define _odd_even_h_inline inline
#else
#define _odd_even_h_inline static
#endif
#endif

_odd_even_h_inline int is_even(const int n) {
    return (n & 1) == 0;
}

_odd_even_h_inline int is_odd(const int n) {
    return (n & 1) != 0;
}

#ifdef __cplusplus
}
#endif

#endif
