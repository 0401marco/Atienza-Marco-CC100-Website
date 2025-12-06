@import url('https://fonts.googleapis.com/css2?family=Poppins:wght@300;400;500;600;700&display=swap');

* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
    font-family: 'poppins', sans-serif;
    text-rendering: optimizeLegibility;
}

body {
    color: #262626;
    background: blue;
}

.header {
    position: fixed;
    top: 0;
    width: 100%;
    padding: 20px 10%;
    background: transparent;
    display: flex;
    justify-content: space-between;
    align-items: center;
    z-index: 100;
}

.Logo {
    font-size: 20px;
    color:  #ffffff;
    text-decoration: none;
    font-weight: 600;
    
}

.navbar a {
    font-size: 18px;
    color: #ededed;
    text-decoration: none;
    font-weight: 500;
    margin-left: 25px;
    transition: .3s;
}

.navbar a:hover,
.navbar a.active {
    color: #9ed0e4de;

}

.home {
    height: 100vh;
   background-image: url('Yuno.jpg') ;
   background-repeat: no-repeat;
    background-size: cover;
    background-position: center;
    display: flex;
    align-items: center;
    padding: 0 10%;

}

.home-content {
    max-width: 600px;
}

.home-content h1 {
    font-size: 56px;
    font-weight: 700;
    line-height: 1.2;
}

.home-content h3 {
    font-size: 32px;
    font-weight: 700;
    color: #7da764;
}

.home-content p {
    font-size: 16px;
    margin: 20px 0 40px;
}

.home-content .btn-box {
    display: flex;
    justify-content: space-between;
    width: 345px;
    height: 50px;
}

.btn-box a {
    position:relative;
    display: inline-flex;
    justify-content: center;
    align-items: center;
    width: 150px;
    height: 100%;
    background: #6bf599de;
    border: 2px solid #6bf599de;
    border-radius: 20px;
    font-size: 19px;
    color: black;
    text-decoration: none;
    font-weight: 600;
    letter-spacing: 1px;
    
}

.btn-box a:nth-child(2) {
    background: transparent;
    color: #6bf599de;

}

.btn-box a:nth-child(2)::before {
    background: #6bf599de;
    border-radius: 20px;
    z-index: 1;

}

.btn-box a::before {
    content: " " ;
    position: absolute;
    top: 0;
    left: 0;
    width: 0;
    height: 100%;
    background:#0000007c;
    z-index: -1;
    transition: .5s;
}

.btn-box a:hover::before {
    width: 100%;
}

