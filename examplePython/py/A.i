%module A
%{
#include "../A/A.h"
%}
%include "std_vector.i"
%template(VectorInt) std::vector<int>;
%include "../A/A.h"
