//Copyright 2019 Iris Technologies, All Rights Reserved
#pragma once

#if defined(_WIN32)
/*! Windows */
#define EdeaWindows
#elif defined(__ANDROID__)
/*! Android */
#define EdeaAndroid
#elif defined(__linux__)
/*! Linux */
#define EdeaLinux
#elif defined(__APPLE__)
#if defined(TARGET_OS_IPHONE)
/*! iOS */
#define EdeaIos
#elif defined(TARGET_OS_MAC)
/*! Mac OS X */
#define EdeaMac
#endif
#else
/*! Undefined */
#error "This Operating System is not supported by Edea"
#endif