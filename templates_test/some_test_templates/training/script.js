// let form = document.forms.form;
// let low = form.elements.low_fee;
// let high = form.elements.high_fee;
// console.log(low.value)
// {/* <div>
//   <form name="publish">
//     <input type="text" name="message" placeholder="введите сообщение"/>
//     <input type="submit" value="отправить"/>
//   </form>
// </div> */}

document.forms.filter_form.onsubmit = function() {
  let res = this.low_fee.value;
  console.log(res)
  return false;
};