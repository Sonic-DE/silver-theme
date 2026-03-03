/*
 * SPDX-FileCopyrightText: 2024 Paul A McAuley <kde@paulmcauley.com>
 * SPDX-FileCopyrightText: 2026 Joseph Crowell <joseph.w.crowell@gmail.com>
 *
 * SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only OR LicenseRef-KDE-Accepted-GPL
 */

#pragma once

#include "breeze.h"
#include "breezecommon_export.h"

#include <QPainterPath>

namespace Breeze
{

/**
 * @brief Functions to manipulate geometry within Silver
 *        To be used as common code base across both kdecoration and kstyle.
 */
class BREEZECOMMON_EXPORT GeometryTools
{
public:
    static QPainterPath roundedPath(const QRectF &rect, Corners corners, qreal radius);
};

}
