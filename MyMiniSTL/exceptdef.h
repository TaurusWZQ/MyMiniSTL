#ifndef __MYMINISTL_EXCEPTDEF_H__
#define __MYMINISTL_EXCEPTDEF_H__

#include <stdexcept>

#include <cassert>

namespace mystl
{

#define MYSTL_DEBUG(expr) \
  assert(expr)  

#define THROW_LENGTH_ERROR_IF(expr, what) \
  if ((expr)) throw std::length_error(what)

#define THROW_OUT_OF_RANGE_IF(expr, what) \
  if ((expr)) throw std::out_of_range(what)

#define THROW_RUNTIME_ERROR_IF(expr, what) \
  if ((expr)) throw std::runtime_error(what)

} // namepsace mystl

#endif // !__MYMINISTL_EXCEPTDEF_H__

