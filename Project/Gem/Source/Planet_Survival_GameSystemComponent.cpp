
#include <AzCore/Serialization/SerializeContext.h>
#include <AzCore/Serialization/EditContext.h>
#include <AzCore/Serialization/EditContextConstants.inl>

#include "Planet_Survival_GameSystemComponent.h"

namespace Planet_Survival_Game
{
    void Planet_Survival_GameSystemComponent::Reflect(AZ::ReflectContext* context)
    {
        if (AZ::SerializeContext* serialize = azrtti_cast<AZ::SerializeContext*>(context))
        {
            serialize->Class<Planet_Survival_GameSystemComponent, AZ::Component>()
                ->Version(0)
                ;

            if (AZ::EditContext* ec = serialize->GetEditContext())
            {
                ec->Class<Planet_Survival_GameSystemComponent>("Planet_Survival_Game", "[Description of functionality provided by this System Component]")
                    ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                        ->Attribute(AZ::Edit::Attributes::AppearsInAddComponentMenu, AZ_CRC("System"))
                        ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ;
            }
        }
    }

    void Planet_Survival_GameSystemComponent::GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided)
    {
        provided.push_back(AZ_CRC("Planet_Survival_GameService"));
    }

    void Planet_Survival_GameSystemComponent::GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible)
    {
        incompatible.push_back(AZ_CRC("Planet_Survival_GameService"));
    }

    void Planet_Survival_GameSystemComponent::GetRequiredServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& required)
    {
    }

    void Planet_Survival_GameSystemComponent::GetDependentServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& dependent)
    {
    }

    Planet_Survival_GameSystemComponent::Planet_Survival_GameSystemComponent()
    {
        if (Planet_Survival_GameInterface::Get() == nullptr)
        {
            Planet_Survival_GameInterface::Register(this);
        }
    }

    Planet_Survival_GameSystemComponent::~Planet_Survival_GameSystemComponent()
    {
        if (Planet_Survival_GameInterface::Get() == this)
        {
            Planet_Survival_GameInterface::Unregister(this);
        }
    }

    void Planet_Survival_GameSystemComponent::Init()
    {
    }

    void Planet_Survival_GameSystemComponent::Activate()
    {
        Planet_Survival_GameRequestBus::Handler::BusConnect();
    }

    void Planet_Survival_GameSystemComponent::Deactivate()
    {
        Planet_Survival_GameRequestBus::Handler::BusDisconnect();
    }
}
