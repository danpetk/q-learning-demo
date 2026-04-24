#pragma once

#include "Page.h"

class App;

class MainPage : public Page {
public:
    MainPage(App& app) : Page(app) {
        mPageContent = ftxui::Button("Hello", []{});
    }
private:
};
