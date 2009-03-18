#ifndef RUBY_19
#define RARRAY_LEN(arr) (RARRAY(arr)->len)
#define RARRAY_PTR(arr) (RARRAY(arr)->ptr)
#endif
#include "config.h"

#include "ptor.h" //PyObject to VALUE conversion
#include "rtop.h" //VALUE to PyObject conversion
#include "cbridge.h" //General interface functions
#include "rp_error.h"
#include "rp_object.h"
