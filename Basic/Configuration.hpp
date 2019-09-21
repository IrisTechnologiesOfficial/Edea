//Copyright 2019 Iris Technologies, All Rights Reserved
#pragma once

#if defined(_WIN32)
#define EdeaWindows
#elif defined(__ANDROID__)
#define EdeaAndroid
#elif defined(__linux__)
#define EdeaLinux
#elif defined(__APPLE__)
#if defined(TARGET_OS_IPHONE)
#define EdeaIos
#elif defined(TARGET_OS_MAC)
#define EdeaMac
#endif
#else
#error "This Operating System is not supported by Edea"
#endif
