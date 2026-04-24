#pragma once

#include <ftxui/component/component.hpp>

class App;

class Page {
public:
    Page(App& app) : mApp{app} {}
    [[nodiscard]] ftxui::Component GetPageContent() { return mPageContent; }
protected:
    App& mApp;
    ftxui::Component mPageContent;
};