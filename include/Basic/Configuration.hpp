//Copyright 2019 Iris Technologies, All Rights Reserved
#pragma once
/**
 * @file Configuration.hpp
 * @brief Contains OS specific configurations
 */


/** @def Windows */
#define EdeaWindows defined(_WIN32)
/** @def Linux */
#define EdeaLinux defined(__linux__)
/** @def Android */
#define EdeaAndroid defined(__ANDROID__)
/** @def Mac OS X */
#define EdeaMac defined(__APPLE__) && defined(TARGET_OS_MAC)
/** @def Mac iOS */
#define EdeaIos defined(__APPLE__) && defined(TARGET_OS_IPHONE)

#if EdeaWindows
//Windows specific configuration
#elif EdeaLinux
//Linux specific configuration
#elif EdeaMac
//Mac specific configuration
#elif EdeaIos
//iOS specific configuration
#elif EdeaAndroid
//Android specific configuration
#else
#error "No compatible OS detected"
#endif