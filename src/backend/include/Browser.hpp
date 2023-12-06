/****************************************************************************
 * Copyright (c) 2022 Andrey Sikorin, Ivan Grigorik                         *
 *                                                                          *
 * This program is free software: you can redistribute it and/or modify     *
 * it under the terms of the GNU General Public License as published by     *
 * the Free Software Foundation, version 3.                                 *
 *                                                                          *
 * This program is distributed in the hope that it will be useful, but      *
 * WITHOUT ANY WARRANTY; without even the implied warranty of               *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU         *
 * General Public License for more details.                                 *
 *                                                                          *
 * You should have received a copy of the GNU General Public License        *
 * along with this program. If not, see <http://www.gnu.org/licenses/>.     *
 ****************************************************************************/

#pragma once

#include <QGuiApplication>

#include "BookmarkManager.hpp"

class Browser {
public:
    Browser(int argc, char* argv[]);

    [[nodiscard]] static int run();

private:
    QScopedPointer<QGuiApplication> m_core {};
    QScopedPointer<QQmlApplicationEngine> m_qmlEngine {};
    QScopedPointer<BookmarkManager> m_bookmarkManager;
};
