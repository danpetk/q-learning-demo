#include "App.h"

#include "MainPage.hpp"

#include <ftxui/component/screen_interactive.hpp>

using namespace ftxui;

void App::Run() {
    auto screen = ScreenInteractive::Fullscreen();
    auto page = MainPage{*this};

    auto content = page.GetPageContent();

    auto screen_renderer = Renderer(content, [&] {
        return content->Render();
    });

    screen.Loop(screen_renderer);
}