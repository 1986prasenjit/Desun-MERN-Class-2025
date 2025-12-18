const buttonElem = document.getElementById("btn1");
const parentElem = document.getElementById("parentBox");

buttonElem.addEventListener("mouseenter", function () {
  const headingElem = document.createElement("h2");
  headingElem.innerText = "Hello Samim";
  parentElem.style.backgroundColor = "#ff0000";

  document.body.appendChild(headingElem);
});
buttonElem.addEventListener("mouseout", function () {
  const headingElem = document.createElement("h2");
  headingElem.innerText = "Bye Samim";
  parentElem.style.backgroundColor = "#ffffffff";

  document.body.appendChild(headingElem);
});
