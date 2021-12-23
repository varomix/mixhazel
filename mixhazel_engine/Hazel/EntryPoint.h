//
// Created by varomix on 12/22/21.
//

#ifndef MIXHAZEL_MIXHAZEL_ENGINE_HAZEL_ENTRYPOINT_H_
#define MIXHAZEL_MIXHAZEL_ENGINE_HAZEL_ENTRYPOINT_H_

extern MixHazel::Application *MixHazel::CreateApplication();

int main(int argc, char **argv) {
    MixHazel::Log::Init();
    MHZ_CORE_WARN("Initialized Log!");
    int a = 42;
    MHZ_INFO("HELLo!! {0}", a);

    auto app = MixHazel::CreateApplication();
    app->Run();
    delete app;
}

#endif //MIXHAZEL_MIXHAZEL_ENGINE_HAZEL_ENTRYPOINT_H_
