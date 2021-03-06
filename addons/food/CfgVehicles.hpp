class CfgVehicles {
    class Box_NATO_Wps_F;
    class ACE_foodSupplyCrateMaster: Box_NATO_Wps_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(SupplyCrateMaster);
        author = "Jak Keen";
        maximumLoad = 25000;

        class TransportItems {
            MACRO_ADDITEM(ACE_MRE_Type1,500);
            MACRO_ADDITEM(ACE_MRE_Type2,500);
            MACRO_ADDITEM(ACE_Camelbak,500);
            MACRO_ADDITEM(ACE_Waterbottle_Empty,500);
            MACRO_ADDITEM(ACE_Waterbottle_Part,500);
            MACRO_ADDITEM(ACE_Waterbottle_Full,500);
        };

        class TransportWeapons {};
        class TransportMagazines {};
        class TransportBackpacks {};
    };

    class ACE_foodSupplyCrateNormal: Box_NATO_Wps_F  {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(SupplyCrateNormal);
        author = "Jak Keen";
        maximumLoad = 10000;

        class TransportItems {
            MACRO_ADDITEM(ACE_MRE_Type1,100);
            MACRO_ADDITEM(ACE_MRE_Type2,100);
            MACRO_ADDITEM(ACE_Camelbak,100);
            MACRO_ADDITEM(ACE_Waterbottle_Full,200);
        };

        class TransportWeapons {};
        class TransportMagazines {};
        class TransportBackpacks {};
    };
};