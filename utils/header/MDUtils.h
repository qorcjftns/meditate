

#define PROPERTY_GS(_SCOPE,_TYPE,_NAME) \
        #_SCOPE: #_TYPE _NAME; \
        #_SCOPE: #_TYPE get#_NAME() { return #_NAME; } \
        #_SCOPE: void set#_NAME(#_TYPE #_NAME) { this->#_NAME = #_NAME; }