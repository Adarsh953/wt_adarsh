function validate()
{
        let password=document.getElementById("password").value
        if(password.trim()=="")
        {
                alert("password is required")
        }
        let username=document.getElementById("email").value
        if(username.trim()=="")
        {
                alert("username is required");
        }
	if(username.trim()=="")
	{
		let emailpattern=/^.+@.+$/
		if(!emailpattern.test(username))
		{
			alert("Enter a valid username");
		}
	}
}
