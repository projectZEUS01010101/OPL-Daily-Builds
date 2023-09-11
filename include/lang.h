#ifndef __LANG_H
#define __LANG_H

#include "lang_autogen.h"
    // START of OPL_DB tweaks
    _STR_ELM,
    _STR_ELMMODE,
    _STR_ELM_LAUNCH_POPSTARTER_NOTFOUND,
    _STR_ELM_LAUNCH_VCD_NOTFOUND,
    _STR_ELM_RENAME_ERROR,
    _STR_ELM_DELETE_ERROR,
    _STR_OPL_FREE,
    _STR_OPL_IFCARO,
    _STR_OPL_DB,
    // END of OPL_DB tweaks

// Maximum external languages supported
#define MAX_LANGUAGE_FILES 15

extern char *internalEnglish[LANG_STR_COUNT];
// getter for a localised string version
extern char *_l(unsigned int id);

typedef struct
{
    char *filePath;
    char *name;
} language_t;

int lngAddLanguages(char *path, const char *separator, int mode);
void lngInit(void);
char *lngGetValue(void);
void lngEnd(void);

// Indices are shifted in GUI, as we add the internal english language at 0
int lngSetGuiValue(int langID);
int lngGetGuiValue(void);
int lngFindGuiID(const char *lang);
char **lngGetGuiList(void);
char *lngGetFilePath(int langID);

#endif
