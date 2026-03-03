/*
 * SPDX-FileCopyrightText: 2023 Paul A McAuley <kde@paulmcauley.com>
 * SPDX-FileCopyrightText: 2026 Joseph Crowell <joseph.w.crowell@gmail.com>
 *
 * SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only OR LicenseRef-KDE-Accepted-GPL
 */

#include "breeze.h"

namespace Breeze
{

QString silverLongVersion()
{
    QString version;

    version = QStringLiteral(SILVER_VERSION);
#if SILVER_GIT_MASTER
    version += QStringLiteral(".git");
#endif
    return version;
}

}
