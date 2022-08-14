#ifndef __MYMINISTL_ASTRING_H__
#define __MYMINISTL_ASTRING_H__

// 定义了 string, wstring, u16string, u32string 类型

#include "basic_string.h"

namespace mystl
{

using string    = mystl::basic_string<char>;
using wstring   = mystl::basic_string<wchar_t>;
using u16string = mystl::basic_string<char16_t>;
using u32string = mystl::basic_string<char32_t>;

}
#endif // !__MYMINISTL_ASTRING_H__

