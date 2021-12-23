//
// Created by varomix on 12/22/21.
//

#ifndef MIXHAZEL_MIXHAZEL_ENGINE_APPLICATION_H_
#define MIXHAZEL_MIXHAZEL_ENGINE_APPLICATION_H_

namespace MixHazel {
    class Application {
     public:
        Application();
        virtual ~Application();

        void Run();

    };

    // To be defined in client
    Application *CreateApplication();
}

#endif //MIXHAZEL_MIXHAZEL_ENGINE_APPLICATION_H_
