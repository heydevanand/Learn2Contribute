<div align="center">
  <h1>Learn2Contribute</h1>
  <solid>Markdown Guide</solid>
</div>
<br>

## Table of contents

- [Introduction](#introduction)
- [Getting Started](#getting-started)
- [Basic Formatting in Markdown](#basic-formatting-in-markdown)
- [Headings](#headings)
- [Lists](#lists)
- [Links](#links)
- [Images](#images)
- [Emphasis and Strong](#emphasis-and-strong)
- [Blockquotes](#blockquotes)
- [Code Blocks](#code-blocks)
- [Horizontal Rules](#horizontal-rules)
- [Tables](#tables)
- [Advanced Nested Lists](#advanced-nested-lists)
- [Footnotes](#footnotes)
- [Defination Lists](#defination-lists)
- [GitHub Flavored Markdown](#github-flavored-markdown)
- [Markdown Editors](#markdown-editors)
- [Tips and Best Practices](#tips-and-best-practices)
- [Resources](#resources)

## Introduction

Markdown is a versatile and easy-to-learn markup language widely used for creating documentation, notes, and web content. It allows you to format text without the complexities of HTML or rich text editors.

## Getting Started

- To get started with Markdown, all you need is a plain text editor.
- Save files with the .md extension.

## Basic Formatting in Markdown

Markdown allows you to format text with simplicity and ease. Here are some common basic formatting options:

### Emphasis (Italics)

To create italic text, enclose the text within single asterisks `*` or underscores `_`.

Example: *Italic Text* or _Italic Text_
```markdown
*Italic Text* or _Italic Text_
```

### Strong Emphasis (Bold)

To make text bold, use double asterisks `**` or double underscores `__` to enclose the text.

Example: **Bold Text** or __Bold Text__

```markdown
**Bold Text** or __Bold Text__
```

### Strikethrough

You can strike through text by enclosing it with two tildes `~~`.

Example: ~~Strikethrough Text~~

```markdown
~~Strikethrough Text~~
```

### Inline Code

To format text as inline code, enclose it within backticks (\`).

Example: `Inline Code`

```markdown
`Inline Code`
```
These are the fundamental formatting options in Markdown. You can use these options to style your text and make it more readable and expressive.

## Headings

In Markdown, you can create different levels of headings by using hash # symbols. Here are examples of different types of headings:

```markdown
# H1 Heading
## H2 Heading
### H3 Heading
#### H4 Heading
##### H5 Heading
###### H6 Heading
```

These headings will render as follows:

# H1 Heading
## H2 Heading
### H3 Heading
#### H4 Heading
##### H5 Heading
###### H6 Heading

You can also use an alternate syntax for headings that underline the text:

```markdown
H1 Heading
===========
H2 Heading
-----------
```

This will result in:

# H1 Heading

## H2 Heading

You can choose the appropriate heading level based on the hierarchy of your document or the desired visual style. Headings are a great way to structure your content and make it more readable.

## Lists

Markdown supports both ordered and unordered lists. Here are examples of different types of lists:

Unordered List (Bulleted List):

```markdown
- Item 1
- Item 2
  - Subitem 2.1
  - Subitem 2.2
- Item 3
```

This will render as:

- Item 1
- Item 2
  - Subitem 2.1
  - Subitem 2.2
- Item 3
- 
Ordered List:

```markdown
1. First item
2. Second item
   1. Subitem 2.1
   2. Subitem 2.2
3. Third item
```

This will render as:

1. First item
2. Second item
   1. Subitem 2.1
   2. Subitem 2.2
3. Third item

You can use hyphens, asterisks, or plus signs for unordered lists, and numbers for ordered lists. Additionally, you can create nested lists by indenting items using spaces or tabs. Lists are a great way to organize content in a structured manner.


## Links

You can create links using both inline and reference styles. Here are examples of different types of links:

Inline Link:

```markdown
[Google](https://www.google.com)
```

This will render as: [Google](https://www.google.com)

You can also include a title for the link (displayed as a tooltip on hover):

```markdown
[Google](https://www.google.com "Visit Google")
```

This will render as: [Google](https://www.google.com "Visit Google")

Reference Link:

First, define the link reference at the end of your document:

```markdown
[Google]: https://www.google.com
```
[Google]: https://www.google.com
Then, you can use the reference in your text:

```markdown
Visit [Google][]. This is a reference link.
```
This will render as: Visit [Google][]. This is a reference link.

You can use either style, but reference links can be particularly useful when you want to keep your content clean and easily maintainable, especially for long documents with many links.


## Images

You can add images to your content using both inline and reference styles. Here are examples of different types of image embedding:

Inline Image:

To embed an image directly in your Markdown content, use the following syntax:

```markdown
![Alt Text](URL)
```
For example:

```markdown
![GitHub Logo](https://github.githubassets.com/images/modules/logos_page/GitHub-Logo.png)
```

This will render the GitHub logo image:

![GitHub Logo](https://github.githubassets.com/images/modules/logos_page/GitHub-Logo.png)

You can also include an optional alt attribute for accessibility:

```markdown
![GitHub Logo](https://github.githubassets.com/images/modules/logos_page/GitHub-Logo.png "GitHub Logo")
```
This will render the same image with an alt attribute:

![GitHub Logo](https://github.githubassets.com/images/modules/logos_page/GitHub-Logo.png "GitHub Logo")

Reference Image:

To use reference-style images, you first define the image reference at the end of your document:

```markdown
![GitHub Logo]: https://github.githubassets.com/images/modules/logos_page/GitHub-Logo.png
```
Then, you can use the reference in your text:

```markdown
Here's the ![GitHub Logo][].
```
This will render the same GitHub logo image.


Reference-style images are helpful for maintaining a clean and organized Markdown document, especially when you have multiple images or need to reference the same image multiple times.



## Emphasis and Strong

You can apply emphasis and strong formatting to your text. Here are examples of different types of emphasis and strong text:

Emphasis (Italics):

To emphasize text in italics, you can use either single asterisks * or single underscores _ around the text:

```markdown
*Italic Text* or _Italic Text_
```
This will render as: *Italic Text*.

Strong (Bold):

To make text strong (bold), you can use double asterisks ** or double underscores __ around the text:

```markdown
**Bold Text** or __Bold Text__
```
This will render as: **Bold Text**.

You can choose between single or double symbols for emphasis and strong text, based on your preference and style consistency. These formatting options are particularly useful when you want to emphasize certain words or phrases within your text.


## Blockquotes
You can create blockquotes to emphasize and distinguish quoted text from the rest of your content. Here's how to format blockquotes:

Blockquote:

To create a blockquote, use the > symbol at the beginning of a line, followed by a space, and then the text you want to quote:

```markdown
> This is a blockquote.
```
This will render as:

>This is a blockquote.

Nested Blockquotes:

You can create nested blockquotes by adding multiple > symbols:

```markdown
> This is a top-level blockquote.
>> This is a nested blockquote.
>>> This is a deeply nested blockquote.
```
This will render as:

>This is a top-level blockquote.

>>This is a nested blockquote.

>>>This is a deeply nested blockquote.

Blockquotes are commonly used for quoting external sources or providing context to text within your document. You can nest blockquotes to different levels to create visually distinct quotes.


## Code Blocks

You can create code blocks to display code or programming examples. Here's how to format code blocks:

Fenced Code Blocks:

To create a fenced code block, wrap your code or text in triple backticks (```) with an optional language identifier:

```markdown
```python
def hello_world():
    print("Hello, World!")
```

This will render as:

```python
def hello_world():
    print("Hello, World!")
```

You can specify the language identifier to enable syntax highlighting for the code block. Markdown supports syntax highlighting for various programming languages, so be sure to choose the appropriate identifier.

Indented Code Blocks:

You can also create indented code blocks by indenting the text with at least four spaces or one tab:

```markdown
    def hello_world():
        print("Hello, World!")
```
This will render as:

    def hello_world():
       print("Hello, World!")

Code blocks are useful for displaying code snippets and making them stand out from the regular text. You can choose the method that best suits your needs and style.


## Horizontal Rules

You can add horizontal rules to separate sections or content with a horizontal line. Here's how to create horizontal rules:

Three Hyphens:

To create a horizontal rule with three hyphens ---, use three or more hyphens in a row on a separate line:

```markdown
---
```
This will render as:

---

Similarly, you can create a horizontal rule with three asterisks ***:

```markdown
***
```
This will render as:

***

You can also create a horizontal rule with three underscores ___:

```markdown
___
```
This will render as:

___

Horizontal rules are a simple and effective way to visually separate sections or content within your Markdown document. You can choose the style that best suits your design preferences.


## Tables

You can create tables to display tabular data using a simple and intuitive syntax. Here's how to format tables:

Simple Table:

To create a basic table, use pipes | to separate columns, and hyphens - to define the header row. You can format it as follows:

```markdown
| Header 1 | Header 2 |
|----------|----------|
| Row 1, Col 1 | Row 1, Col 2 |
| Row 2, Col 1 | Row 2, Col 2 |
```
This will render as:

| Header 1 | Header 2 |
|----------|----------|
| Row 1, Col 1 | Row 1, Col 2 |
| Row 2, Col 1 | Row 2, Col 2 |

Aligning Columns:

You can specify column alignment by adding colons : within the header row:

```markdown
| Left-aligned | Center-aligned | Right-aligned |
|:------------ |:--------------: | ------------:|
| Left         | Center          | Right        |
```
This will render as:

| Left-aligned | Center-aligned | Right-aligned |
|:------------ |:--------------: | ------------:|
| Left         | Center          | Right        |

Advanced Tables:

For more advanced tables with spanning cells and complex formatting, you might consider using a Markdown table generator or an online Markdown editor that offers more table formatting options.

Markdown tables are a straightforward way to present tabular data, and you can customize them to fit your specific needs.


## Advanced Nested Lists

You can create advanced nested lists, including task lists, definition lists, and more. Here are examples of different types of advanced nested lists:

Task Lists:

Task lists are lists where each item can be a task with a checkbox for completion status. Use - [ ] for incomplete tasks and - [x] for completed tasks. You can create nested task lists as well:

```markdown
- [x] Complete task 1
- [ ] Incomplete task 2
  - [ ] Subtask 2.1
  - [x] Subtask 2.2
- [x] Complete task 3
```
This will render as:

- [x] Complete task 1
- [ ] Incomplete task 2
  - [ ] Subtask 2.1
  - [x] Subtask 2.2
- [x] Complete task 3

Definition Lists:

A definition list consists of terms and their definitions. Terms are followed by a colon, and definitions are indented under the terms:

```markdown
Term 1
:   Definition 1

Term 2
:   Definition 2
:   Definition 3
``` 
This will render as:

Term 1
:   Definition 1

Term 2
:   Definition 2
:   Defination 3

Nested Lists Combination:

You can combine different types of nested lists in your Markdown document as needed to represent complex structures or content.

```markdown
1. Main task
   - Subtask 1
     - [ ] Subtask 1.1
     - [x] Subtask 1.2
   - Subtask 2
2. Another main task
```
This will render as:

1. Main task
   - Subtask 1
     - [ ] Subtask 1.1
     - [x] Subtask 1.2
   - Subtask 2
2. Another main task

Advanced nested lists provide flexibility for organizing and structuring various types of content within your Markdown documents.

## Footnotes

You can add footnotes to your document to provide additional information or references. Here's how to format footnotes:

Adding Footnotes:

In your text, place a caret symbol ^ where you want the footnote reference to appear.

Define the footnote content at the end of your document, using the same caret symbol and a unique identifier, followed by a colon and the footnote text.

For example:

```markdown
This is a sentence with a footnote[^1].
[^1]: This is the footnote text. It provides additional information or references.
```
This will render as:

This is a sentence with a footnote[^1].
[^1]: This is the footnote text. It provides additional information or references.

Multiple Footnotes:

You can include multiple footnotes in your document, each with a unique identifier:

```markdown
Here's the first footnote[^1], and here's the second footnote[^2].

[^1]: First footnote content.
[^2]: Second footnote content.
```
This will render as:

Here's the first footnote[^1], and here's the second footnote[^2].

[^1]: First footnote content.
[^2]: Second footnote content.

Inline Footnote Definitions:

Alternatively, you can define footnotes inline if you prefer not to place them at the end of the document. For example:

```markdown
This is a sentence with a footnote[^1]: The inline footnote content.
```
This will render as:

This is a sentence with a footnote[^1]: The inline footnote content.

Footnotes are useful for adding explanatory notes, citations, or references without cluttering the main text. You can place the footnote content at the end of your document or inline with the text, depending on your preferences.

To see how footnotes were added go to bottom of this guide.

## Defination Lists

You can create definition lists to explain terms or concepts. A definition list consists of terms followed by their corresponding definitions. Here's how to format definition lists:

Basic Definition List:

To create a basic definition list, use colons : to define terms and indent the definitions:

```markdown
Term 1:
  Definition of Term 1
Term 2:
  Definition of Term 2
```

Multiple Definitions for a Term:

You can have multiple definitions for a single term by indenting each definition under the same term:

```markdown
Term:
  - First Definition
  - Second Definition
```
This will render as:

Term:
  - First Definition
  - Second Definition

Nested Definitions:

You can also nest definitions within definitions to represent complex relationships or hierarchical structures:

```markdown
Term 1:
  - Subterm 1.1:
    - Subterm 1.1.1
    - Subterm 1.1.2
  - Subterm 1.2:
    - Subterm 1.2.1
Term 2:
  - Subterm 2.1
```

This will render as:

Term 1:
  - Subterm 1.1:
    - Subterm 1.1.1
    - Subterm 1.1.2
  - Subterm 1.2:
    - Subterm 1.2.1
Term 2:
  - Subterm 2.1

Definition lists are a useful way to explain terms, concepts, or relationships within your Markdown documents. You can nest definitions to represent various levels of detail.


## GitHub Flavored Markdown

GitHub Flavored Markdown (GFM) is a Markdown dialect used by GitHub that extends the standard Markdown syntax to include additional features and improvements. These extensions are specifically designed to enhance the rendering of Markdown content on the GitHub platform. Some of the key features of GitHub Flavored Markdown include:

Task Lists:

GFM supports task lists, which allow you to create to-do lists with checkboxes. To mark a task as complete, use - [x], and for an incomplete task, use - [ ].
Example:

```markdown

- [x] Task 1 (Completed)
- [ ] Task 2 (Incomplete)
```

Mentioning Users and Issues:

Mentioning GitHub users and issues in GFM creates links to the user's profile or the issue.
Example:

Mentioning a user: @username creates a link to the user's profile: @octocat.
Mentioning an issue: #1 creates a link to the issue: #1.

Emoji Support:

You can use emoji in GFM by typing a colon followed by the name of the emoji.
Example:

```markdown
:smile: This is an emoji.
```
Output:
:smile: This is an emoji.

Autolinking:

URLs and email addresses are automatically converted into clickable links without the need for angle brackets.
Example:

```markdown
https://www.github.com is automatically converted into a link: https://www.github.com.
email@example.com is automatically converted into a mailto link: email@example.com.
```

Fenced Code Blocks with Syntax Highlighting:

Fenced code blocks are like standard Markdown code blocks but with the added feature of specifying the programming language for syntax highlighting.
Example:

```markdown
<pre><code>```python
def hello_world():
    print("Hello, World!")
</code></pre>
```
Output:

<pre><code>```python
def hello_world():
    print("Hello, World!")
```
</code></pre>

Tables with Pipe Alignment:

GFM tables can include column alignment to align the content within the cells. Use colons (:) to indicate column alignment.
Example:

```markdown
| Left-aligned | Center-aligned | Right-aligned |
|:------------  |:--------------: | ------------:|
| Left         | Center          | Right        |
```
Output:

| Left-aligned | Center-aligned | Right-aligned |
|:------------  |:--------------: | ------------:|
| Left         | Center          | Right        |

Footnotes:

Footnotes in GFM are created similarly to standard Markdown but with enhanced rendering and reference numbering.
Example:

```markdown
This is some text with a footnote[^1].

[^1]: This is the content of the footnote.
```

Output:

This is some text with a footnote[^1].

[^1]: This is the content of the footnote.

SHA References:

You can reference commits, issues, and pull requests by their SHA-1 hashes.
Example:

```markdown
Commit reference: 7a1e2fd (this references a specific commit).
Issue reference: #123 (this references a specific issue).
```

Relative Links:

GFM supports relative links within your repository, making it easier to link to other files or content in the same repository.
Example:

```markdown
Relative link to a file: [Link to README](./README.md).
```

Strikethrough:

Double tildes (~~) can be used to strike through text for deletion.
Example:

```markdown
This text is ~~struck through~~.
```
Output:
This text is ~~struck through~~.

These GFM features enhance the capabilities of standard Markdown, making it more interactive and expressive, especially when used on the GitHub platform.

Footnotes
This is the content of the footnote. ↩


## Markdown Editors

Markdown editors are text editors or software applications designed for creating, editing, and previewing Markdown documents. They make it easier for users to write and format 
Markdown text without needing to remember or manually write the Markdown syntax. Markdown editors are popular among writers, bloggers, software developers, and anyone who prefers a simple and efficient way to create structured documents for various purposes.

Popular Markdown editors include:

- Visual Studio Code (VS Code): A popular code editor that provides extensive support for Markdown with numerous extensions available.

- Typora: A WYSIWYG Markdown editor with a live preview, making it easy for users to write and format Markdown content.

- Dillinger: A cloud-based Markdown editor that allows you to access your documents from anywhere.

- Obsidian: A Markdown-based note-taking and knowledge management tool.

- Notion: A note-taking and collaboration platform that supports Markdown.

- Atom: Another code editor like VS Code that offers Markdown support.

- Ulysses: A Markdown editor for macOS and iOS, popular among writers.


## Tips and Best Practices

Markdown is a simple and versatile markup language, and using it effectively involves understanding some key tips and best practices. Here are some tips to help you make the most of Markdown:

- Consistent Formatting: Maintain a consistent formatting style throughout your document. Use the same number of hash symbols for headings, uniform bullet points for lists, and consistent formatting for links and images.

- Descriptive Link Text: When creating links, use descriptive link text rather than raw URLs. This enhances the readability and usability of your content.

- Modular Organization: Break your content into modular sections with clear headings. This makes your document more structured and easier to navigate.

- Nested Lists: Utilize nested lists for hierarchical content. Indent subitems properly to convey the relationships between different items.

- Inline Code: Use backticks for inline code elements. Make sure to specify the programming language when using code blocks for syntax highlighting.

- Task Lists: For task lists, use - [ ] for incomplete tasks and - [x] for completed tasks. This is useful for creating to-do lists or tracking progress.

- Footnotes: Add footnotes when necessary to provide additional context or citations. Make sure the footnotes are clear and well-organized.

- Tables: When creating tables, ensure that columns and rows are properly aligned. Use colons (:) to indicate column alignment.

- Escape Characters: If you need to include characters that have special Markdown meanings (e.g., asterisks or underscores), escape them with a backslash to display them as plain text.

- Consistent Indentation: Maintain consistent indentation for code blocks, blockquotes, and lists. This improves the readability of your document.

- Use Horizontal Rules: Insert horizontal rules (horizontal lines) to separate sections for better document organization.

- Testing and Previewing: Always test and preview your Markdown content to check for rendering errors and formatting issues.

- Version Control: When collaborating on Markdown documents, use version control systems like Git to track changes and facilitate collaborative editing.

- Markdown Editors: Consider using a Markdown editor with live preview features to streamline your writing and formatting process.

- Accessibility: Keep accessibility in mind when creating Markdown content. Use descriptive alt text for images and ensure that your content is easily navigable with screen readers.

- Keep It Simple: Markdown's strength lies in its simplicity. Avoid overcomplicating your documents with excessive formatting. Remember that Markdown is designed for ease of use.

- Documentation: If you're creating documentation, include clear and concise explanations, examples, and instructions. Use a documentation-specific structure, such as headers, subheaders, and code samples.

- Learn the Syntax: Familiarize yourself with the Markdown syntax. The better you understand it, the more efficiently you can create and format content.

- Consistent Line Length: For long paragraphs or lines of text, consider keeping line lengths reasonable for readability.

- Regular Updates: Periodically review and update your Markdown documents to ensure their accuracy and relevance.

Markdown is a versatile tool for creating various types of content, from documents and articles to code documentation and project READMEs. By following these best practices, you can create well-structured, readable, and professional Markdown documents.


## Resources

- [Markdown Cheat Sheet](https://www.markdownguide.org/cheat-sheet/)
- [GitHub's Mastering Markdown](https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax)
- [CommonMark Specification](https://commonmark.org/)
- [Markdown Editors](https://www.markdownguide.org/tools/)


































