# 📘 Basics of HTML

HTML stands for **HyperText Markup Language**.  
It’s the standard language used to create and structure webpages.  
HTML describes the structure of a web page using **tags** (like `<h1>`, `<p>`, `<a>`, etc.).  
It’s not a programming language — it’s a _markup language_, meaning it’s used to mark up content so browsers know how to display it.

# <!DOCTYPE html> → Tells the browser the document is HTML5.

# <html> → The root element of an HTML page.

# <head> → Contains metadata (title, charset, viewport, etc.).

# <title> → Sets the text shown in the browser tab.

# <body> → Contains all visible page content.

# <h1> → Heading tag (largest heading).

# <p> → Paragraph tag.

## Formatting Tags

## Formatting tags help change or emphasize how text appears.

## Tag Description Example

<b>Bold</b> ---> <b> Bold text
<strong>Important</strong>---> <strong> Important text (semantic bold)
<i>Italic</i> ---> <i> Italic text
<em>Emphasis</em> ----> <em> Emphasized text (semantic italic)
<u>Underline</u> ----> <u> Underlined text
<small>Note</small> ---> <small> Smaller text
<mark>Highlight</mark> ----> <mark> Highlighted text

### Use <strong> and <em> when meaning matters (not just looks). They help screen readers and search engines understand your content better.

1. ❓ What does HTML stand for?

HTML stands for HyperText Markup Language.
It’s used to create and structure webpages.

HyperText → text that links to other pages.

Markup → special tags that define content.

Language → a set of rules browsers understand.

2. ❓ Why is <!DOCTYPE html> important?

It tells the browser that you’re using HTML5.
Without it, browsers might switch to quirks mode and interpret your code incorrectly.
Think of it like telling the browser: “Use modern HTML rules to read this page.”

3. ❓ What’s the difference between <head> and <body>?
<head>	<body>
Contains information about the page	Contains all visible page content
Example: <title>My Portfolio</title>	Example: <h1>Welcome</h1>
Not visible to the user	Visible to the user

💡 In short:
🧠 <head> = behind the scenes
👀 <body> = what you actually see

4. ❓ Name three formatting tags and what they do.
   Tag Description Example
   <b> Makes text bold <b>Bold</b> → Bold
   <i> Makes text italic <i>Italic</i> → Italic
   <u> Underlines text <u>Underline</u> → <u>Underline</u>
   
5. ❓ What’s the difference between <ul> and <ol>?
Tag Meaning Example Output
<ul>	Unordered list (bullets)	• Apple
• Banana
<ol>	Ordered list (numbers)	1. Step One
6. Step Two

✅ Use <ul> when order does not matter.
✅ Use <ol> when order does matter.

6. ❓ How do you create a hyperlink?

You use the anchor tag <a> with an href attribute.

<a href="https://www.example.com">Visit Example</a>

<a> → defines the link

href → specifies where it goes

Text inside the tag → clickable part

Open in a new tab:

<a href="https://www.example.com" target="_blank">Open in new tab</a>


Alright, imagine you have a storybook.

Now, in that storybook:

### “Hyper” means super active — it can jump from one page to another or one story to another just by clicking (like magic!).

### “Text” means the words and information on those pages.

### “Markup” means you decorate or label those words so the computer knows what’s what — for example:

### “This is a heading.”

### “This is a paragraph.”
### “This is a picture.”

### So, HTML (HyperText Markup Language) is like a special way of writing instructions to tell a web browser how to show your story (the website).

👉 You write normal text, but with tags (like <h1> or <p>) that help the browser understand:

### what’s big text,

### what’s small,

### where the links go,

### where pictures appear.

### If you didn’t use HTML, the browser would just see a mess of words and pictures with no idea how to arrange them.

### So in simple words:

### HTML is the language that teaches computers how to show stories beautifully on the web.
