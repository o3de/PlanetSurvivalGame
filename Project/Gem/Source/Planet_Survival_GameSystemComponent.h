
#pragma once

#include <AzCore/Component/Component.h>

#include <Planet_Survival_Game/Planet_Survival_GameBus.h>

namespace Planet_Survival_Game
{
    class Planet_Survival_GameSystemComponent
        : public AZ::Component
        , protected Planet_Survival_GameRequestBus::Handler
    {
    public:
        AZ_COMPONENT(Planet_Survival_GameSystemComponent, "{7992C978-D39C-4654-81A8-669FAF3CE627}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

        Planet_Survival_GameSystemComponent();
        ~Planet_Survival_GameSystemComponent();

    protected:
        ////////////////////////////////////////////////////////////////////////
        // Planet_Survival_GameRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
