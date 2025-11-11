# What Are Multimedia Elements in HTML?

## Multimedia means audio, video, and images — anything that isn’t plain text.

## HTML lets you easily add these elements using special tags like:

## <img> → for images

## <audio> → for sound/music

## <video> → for videos

## <iframe> → for embedding YouTube videos or other web content

---

# 🎨 Introduction to CSS (Cascading Style Sheets)

## 🌐 What is CSS?

**CSS** stands for **Cascading Style Sheets**.  
It’s the language used to **style** and **design** web pages — to make them look attractive and organized.

While **HTML** is used to create the **structure** of a page,  
**CSS** is used to control how that structure **looks** — its colors, fonts, layout, spacing, and more.

Example:

- HTML builds the house 🏠
- CSS paints it, decorates it, and arranges the furniture 🎨

---

## 🧩 Why Use CSS?

Without CSS, all web pages would look like plain text on a white background.  
CSS helps you:

1. **Add colors** and background images
2. **Change fonts** and text sizes
3. **Adjust spacing** (margin, padding)
4. **Position elements** (left, right, center, etc.)
5. **Create layouts** using grids or flexbox
6. **Make pages responsive** (fit on mobile, tablet, desktop)

---

## 🧱 How to Add CSS to a Web Page

There are **3 main ways** to include CSS in an HTML file:

### 1. Inline CSS

Written directly inside an HTML tag using the `style` attribute.

### <p style="color: blue; font-size: 20px;">This is a blue paragraph.</p>

### 2. Internal CSS

Which we write inside the head tag within style tag

### <style>
h1 {
color: darkblue;
text-align: center;
}
p {
color: black;
font-size: 18px;
text-align: center;
}
</style>

### 3. External CSS Example

External CSS means your CSS code lives in a separate file — usually named style.css.
Then you connect that file to your HTML using a <link> tag.

This is the best and most common method for real projects.
