var Xw = 700
var Yw = 450

function punto(p)
function cambia(c) {
    return [ Xw + c[0], Yw - c[1] ]

}

function main() {
    var lienzo = document.getElementById("cloth").getContext("2d")

    var centro = cambia([0, 0])

    lienzo.beginpath()
    lienzo.arc(centro[0], centro[1], 50, 0, 2 * Math.PI)
    linezo.fillstyle = "#00CCCC"
    lienzo.fill()
    lienzo.arc(centro[0], centro[1], 50, 0, 2 * Math.PI)
    linezo.stroke()



}
