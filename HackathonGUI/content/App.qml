import QtQuick 2.15

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

}
