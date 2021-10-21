var btn = document.getElementById("btn");
function verificaSenha(senha){
    if(senha == "ESQUECIASENHA"){
        document.body.style.background="green";
        alert("Parabéns finalmente");
    }else{
        alert("Errado, Estude mais sobre Segurança da Informação");
    }
}
btn.addEventListener("click",function(e){
    e.preventDefault();
    var senha = document.getElementById("senha").value;
    verificaSenha(senha);
});