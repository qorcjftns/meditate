

#define PROPERTY_GS(_SCOPE,_TYPE,_NAME) \
        #_SCOPE: #_TYPE get_NAME() { return #_NAME; } \
        #_SCOPE: void set_NAME(#_TYPE #_NAME) {}