const send_post = async (form) => {
  const rawResponse = await fetch("/credit-card", {
    method: 'POST',
    headers: {
      'Accept': 'application/json',
      'Content-Type': 'application/json'
    },
    body: JSON.stringify(form)
  });
  const content = await rawResponse.json();

  console.log(content);
}

document.forms.filter_form.onsubmit = function () {
  submitted_form = {
    low_fee: this.low_fee.value,
    high_fee: this.high_fee.value,

    low_credit_score: this.low_credit_score.value,
    high_credit_score: this.high_credit_score.value,

    low_apr: this.low_apr.value,
    high_apr: this.high_apr.value,

    low_cashback: this.low_cashback.value,
    high_cashback: this.high_cashback.value,
  };
  send_post(submitted_form)
  console.log(submitted_form);
  return false;
};

// rewrite script
// must send GET request with filtertype and data in body