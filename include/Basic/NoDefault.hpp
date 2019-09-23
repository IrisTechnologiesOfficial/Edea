//Copyright 2019 Iris Technologies, All Rights Reserved
#pragma once

#if defined(_MSC_VER)
/**
 * @def EdeaNoDefault
 * @brief Alias for __assume(0)
 * @hideinitializer
 */
#define EdeaNoDefault __assume(0)
#else
/**
 * @def EdeaNoDefault
 * @brief Alias for __builtin_unreachable()
 */
#define EdeaNoDefault __builtin_unreachable()
#endif