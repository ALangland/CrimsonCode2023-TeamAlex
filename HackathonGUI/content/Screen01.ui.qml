/*
This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-ui-forms.html for details on .ui.qml files.
*/

import QtQuick 6.2
import QtQuick.Controls 6.2
import HackathonGUI
import QtQml.Models

Rectangle {
    id: rectangle
    width: Constants.width
    height: Constants.height
    color: "#742828"

    ListModel{
        id: blockChoices

        ListElement{
            displayText: "25 minutes study, 5 minutes break"
        }

        ListElement{
            displayText: "50 minutes study, 10 minutes break"
        }

        ListElement{
            displayText: "35 minutes study, 15 minutes break"
        }

        ListElement{
            displayText: "60 minutes study, 20 minutes break"
        }
    }

    Text {
        id: label
        width: 1841
        height: 281
        color: "#ffffff"
        text: qsTr("PomodoroHelper")
        anchors.top: button.bottom
        font.pointSize: 130
        anchors.horizontalCenterOffset: -10
        font.family: Constants.font.family
        anchors.topMargin: -543
        anchors.horizontalCenter: parent.horizontalCenter

        SequentialAnimation {
            id: animation

            ColorAnimation {
                id: colorAnimation1
                target: rectangle
                property: "color"
                to: "#2294c6"
                from: Constants.backgroundColor
            }

            ColorAnimation {
                id: colorAnimation2
                target: rectangle
                property: "color"
                to: Constants.backgroundColor
                from: "#2294c6"
            }
        }

        ComboBox {
            id: comboBox
            x: 902
            y: 312
            width: 308
            height: 61
            textRole: blockChoices
            font.pointSize: 20
            displayText: "Choose an option"
        }
    }

    Text {
        id: text1
        x: 268
        y: 261
        color: "#ffffff"
        text: qsTr("Enter your desired block time:")
        font.pixelSize: 50
    }

    Button {
        id: button
        x: 1098
        y: 465
        text: qsTr("Button")
    }
    states: [
        State {
            name: "clicked"
            when: button.checked

            PropertyChanges {
                target: label
                text: qsTr("Button Checked")
            }
        }
    ]
}
