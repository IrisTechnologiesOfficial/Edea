//Copyright 2019 Iris Technologies, All Rights Reserved
#include <Core/MainWindow.hpp>

#if defined(EdeaWindows)
int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    //FreeConsole();
    AppInstance = hInstance;
    Edea::MainWindow::Draw();
    Edea::MainWindow::Close();
}
#endif
