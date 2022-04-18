console.log("hi")
document.forms.filter_form.onsubmit = function() {

  submitted_form = {

  low_fee: this.low_fee.value,
  high_fee: this.high_fee.value,

  low_credit_score: this.low_credit_score.value,
  high_credit_score: this.high_credit_score.value,

  low_apr: this.low_apr.value,
  high_apr: this.high_apr.value,

  low_cashback: this.low_cashback.value,
  high_cashback: this.high_cashback.value,
  }
  console.log(submitted_form)
  return false;
};