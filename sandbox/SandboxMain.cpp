#include <iostream>
#include "MixHazel.h"

class Sandbox : public MixHazel::Application {
 public:
    Sandbox() {

    }
    ~Sandbox() {

    }
};

MixHazel::Application *MixHazel::CreateApplication() {
    return new Sandbox();
}