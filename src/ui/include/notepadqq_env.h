/*
 *
 * This file is part of the Notepadqq text editor.
 *
 * Copyright(c) 2010 Notepadqq team.
 * http://notepadqq.sourceforge.net/
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef NOTEPADQQ_ENV_H
#define NOTEPADQQ_ENV_H


#include <QCommandLineParser>
#include <QFile>
#include <QList>
#include <QObject>
#include <QProcessEnvironment>
#include <QString>
#include <QUrl>

#define POINTVERSION "2.0.0-beta+git" // major.minor.revision

#define COPYRIGHT_YEAR "2019"

#define MIB_UTF_8 106

/**
 * @brief Global information and utility functions.
 */
class NotepadqqEnv
{
public:

    static NotepadqqEnv& getInstance()
    {
        static NotepadqqEnv instance;
        return instance;
    }

    static const QString version;
    static const QString contributorsUrl;
    static const QString website;
    static QString copyright();
    static QString appDataPath(QString fileName = QString());
    static QString editorPath();
    static QString extensionToolsPath();
    static QString nodejsPath();
    static QString npmPath();
    static QString fileNameFromUrl(const QUrl &url);
    static QSharedPointer<QCommandLineParser> getCommandLineArgumentsParser(const QStringList &arguments);

    static void showQtVersionWarning(bool showCheckBox, QWidget *parent = nullptr);

    static QString extensionsPath();

    static QList<QString> translations();

    /**
     * @brief Print environment information for debugging purposes.
     */
    static void printEnvironmentInfo();


private:
    NotepadqqEnv() {}
    NotepadqqEnv(NotepadqqEnv const&);      // Don't implement
    void operator=(NotepadqqEnv const&); // Don't implement
};

#endif // NOTEPADQQ_H
