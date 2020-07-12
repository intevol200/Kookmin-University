var el = document.querySelector(".updown");

el.addEventListener("mouseover",function(){
  var left = parseInt(el.style.left);
  var top = parseInt(el.style.top);
  el.style.left = 80 + "vw";
  el.style.top = 80 + "vh"
});