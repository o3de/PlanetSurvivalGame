
#include <AzCore/Memory/SystemAllocator.h>
#include <AzCore/Module/Module.h>

#include "Planet_Survival_GameSystemComponent.h"

namespace Planet_Survival_Game
{
    class Planet_Survival_GameModule
        : public AZ::Module
    {
    public:
        AZ_RTTI(Planet_Survival_GameModule, "{3E1809E9-25EE-4AB2-8FA7-539FCFCC27B6}", AZ::Module);
        AZ_CLASS_ALLOCATOR(Planet_Survival_GameModule, AZ::SystemAllocator, 0);

        Planet_Survival_GameModule()
            : AZ::Module()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            m_descriptors.insert(m_descriptors.end(), {
                Planet_Survival_GameSystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList{
                azrtti_typeid<Planet_Survival_GameSystemComponent>(),
            };
        }
    };
}// namespace Planet_Survival_Game

AZ_DECLARE_MODULE_CLASS(Gem_Planet_Survival_Game, Planet_Survival_Game::Planet_Survival_GameModule)
