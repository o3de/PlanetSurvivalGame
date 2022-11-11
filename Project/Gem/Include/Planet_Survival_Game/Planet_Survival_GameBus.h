
#pragma once

#include <AzCore/EBus/EBus.h>
#include <AzCore/Interface/Interface.h>

namespace Planet_Survival_Game
{
    class Planet_Survival_GameRequests
    {
    public:
        AZ_RTTI(Planet_Survival_GameRequests, "{87D132B3-503D-4E2A-AF2F-A857C1AADF00}");
        virtual ~Planet_Survival_GameRequests() = default;
        // Put your public methods here
    };

    class Planet_Survival_GameBusTraits
        : public AZ::EBusTraits
    {
    public:
        //////////////////////////////////////////////////////////////////////////
        // EBusTraits overrides
        static constexpr AZ::EBusHandlerPolicy HandlerPolicy = AZ::EBusHandlerPolicy::Single;
        static constexpr AZ::EBusAddressPolicy AddressPolicy = AZ::EBusAddressPolicy::Single;
        //////////////////////////////////////////////////////////////////////////
    };

    using Planet_Survival_GameRequestBus = AZ::EBus<Planet_Survival_GameRequests, Planet_Survival_GameBusTraits>;
    using Planet_Survival_GameInterface = AZ::Interface<Planet_Survival_GameRequests>;

} // namespace Planet_Survival_Game
