//Copyright 2019 Iris Technologies, All Rights Reserved
#pragma once

#if defined(_MSC_VER)
#define EdeaNoDefault __assume(0)
#else
#define EdeaNoDefault __builtin_unreachable()
#endif