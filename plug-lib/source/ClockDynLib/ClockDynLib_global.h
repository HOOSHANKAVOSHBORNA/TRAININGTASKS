#ifndef CLOCKDYNLIB_GLOBAL_H
#define CLOCKDYNLIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CLOCKDYNLIB_LIBRARY)
#  define CLOCKDYNLIB_EXPORT Q_DECL_EXPORT
#else
#  define CLOCKDYNLIB_EXPORT Q_DECL_IMPORT
#endif

#endif // CLOCKDYNLIB_GLOBAL_H
