#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

#include "DirectXPage.g.h"

using namespace winrt;
using namespace Microsoft::UI::Xaml::Media::Animation;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::SpinningCube::implementation
{
    // https://docs.microsoft.com/en-us/windows/uwp/cpp-and-winrt-apis/consume-com
    // https://docs.microsoft.com/en-us/uwp/cpp-ref-for-winrt/com-ptr
    // https://stackoverflow.com/questions/50788733/c-winrts-com-ptr-reset
    // https://github.com/kennykerr/cppwinrt/blob/master/Store/Direct2D/App.cpp
    // https://stackoverflow.com/questions/71507022/how-to-implement-threadpoolrunasync-in-winrt-c
    // https://kennykerr.ca/2018/03/13/cppwinrt-coroutines-thread-pool/
    // https://github.com/microsoft/cppwinrt/issues/97
    // https://github.com/microsoft/Windows-universal-samples/blob/main/Samples/BasicHologram/cppwinrt/Content/SpinningCubeRenderer.cpp
    // https://github.com/microsoft/microsoft-ui-xaml/issues/3854

    MainWindow::MainWindow()
    {
        InitializeComponent();

        RootFrame().Navigate(xaml_typename<winrt::SpinningCube::DirectXPage>(), nullptr, SuppressNavigationTransitionInfo());
    }
}
