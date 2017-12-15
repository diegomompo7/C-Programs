var Xw= 750
var Yw = 450
var lienzo

function cambia(c) {
    return [Xw + c[0], Yw - c[1] ]
}

function punto(p) {
    var centro = cambia([p])
    var r = 25
          
     lienzo.beginPath()
     lienzo.arc(centro[0], centro[1], r-10, 0, 2 * Math.PI, false)
     lienzo.fillStyle"#00FFFF"
     lienzo.fill()
     lienzo.arc(centro[0], centro[1], r, 0, 2 * Math.PI, false)
     lienzo.stroke()

}
function main() {
    var lienzo = document.getElementbyId("cloth").getContext("2d")
    [0,0,0]
    [0,1,0]
    [0,1,1]
    {0,0,1}
    [0,0,0]
    [0,1,0]
    [0,1,1]
    {0,0,1}
    punto([0,0])
    punto([10,10])
}
