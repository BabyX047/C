// JavaScript for the blog site

document.addEventListener('DOMContentLoaded', function() {
    const readMoreButtons = document.querySelectorAll('.read-more');

    readMoreButtons.forEach(button => {
        button.addEventListener('click', function() {
            alert('This feature is coming soon!');
        });
    });
});
