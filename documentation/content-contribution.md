# Content Contribution Guide

Welcome to the Learn2Contribute Content Contribution Guide. We appreciate your interest in contributing content to our project. This guide outlines best practices, conventions, and guidelines for creating meaningful and effective content in Markdown, with a focus on using Visual Studio Code for content creation, as well as Jupyter Lab for more complex content.

## Table of Contents

1. [Getting Started](#getting-started)
2. [Content Quality](#content-quality)
3. [Writing Guidelines](#writing-guidelines)
4. [Using Jupyter Lab and Markdown](#using-jupyter-lab-and-markdown)
5. [Markdown Best Practices](#markdown-best-practices)
6. [Submitting Content](#submitting-content)
7. [Creating Content Locally](#creating-content-locally)
8. [Using Git and GitHub](#using-git-and-github)
9. [Copyright and Licensing](#copyright-and-licensing)

## Getting Started

Before you begin contributing content to Learn2Contribute, here are a few initial steps:

1. **Familiarize Yourself**: Take some time to understand the project's goals, audience, and existing content.

2. **Create a GitHub Account**: If you haven't already, create a GitHub account to submit your content contributions.

3. **Fork the Repository**: Click the "Fork" button at the top right of the repository to create your copy.

4. **Clone Your Fork**: Use Git to clone your forked repository to your local machine.

## Content Quality

We value high-quality content that aligns with the goals of our project. When creating content, please consider the following:

- **Relevance**: Ensure your content is relevant to the project and its objectives.

- **Clarity**: Write with clear and concise language to convey your message effectively.

- **Accuracy**: Ensure that all information provided is accurate and up-to-date.

- **Consistency**: Follow established conventions and maintain a consistent style throughout your content.

- **Meaningful Contributions**: Aim to create content that adds value to our project and benefits our community.

## Writing Guidelines

To maintain consistency and clarity in our content, follow these writing guidelines:

- Use proper grammar and punctuation.

- Avoid jargon and use plain language where possible.

- Organize content with headings and subheadings for readability.

- Provide examples, code snippets, and illustrations where relevant.

- Use an inclusive and welcoming tone to address a diverse audience.

- Cite sources when referencing external content.

## Using Jupyter Lab and Markdown

We use Jupyter Lab and Markdown to create content. Jupyter Lab is a powerful environment for creating complex, interactive content, while Markdown is used for text-based content. To understand these tools completely and make any required changes to the content, refer to the following resources:

- [Jupyter Lab Documentation](https://jupyterlab.readthedocs.io/en/stable/): Learn to use Jupyter Lab effectively for content creation.

- [Markdown Guide](/documentation/markdown.md): Familiarize yourself with Markdown formatting.

If you need any assistance or have questions about using these tools, feel free to reach out in [GitHub Discussions](https://github.com/rishikeshsamant/Learn2Contribute/discussions) before starting your work.

## Markdown Best Practices

We use Markdown to create our Content. When creating content in Markdown, consider these best practices:

- **Headers**: Use headers (e.g., `#`, `##`, `###`) for section titles and subheadings.

- **Lists**: Use bullet points (`-`) for unordered lists and numbers for ordered lists.

- **Links**: Use `[link text](URL)` format for creating hyperlinks.

- **Images**: Embed images using `![alt text](image URL)`.

- **Code Blocks**: Format code blocks with triple backticks (```) and specify the code language for syntax highlighting.

- **Emphasis**: Use `*italic*` or `**bold**` for emphasis.

- **Tables**: Create tables using pipes (`|`) and hyphens (`-`).

For a more detailed guide on Markdown formatting, please refer to our [Markdown Guide](/documentation/markdown.md) in our repository. If you want to use any other tool to create content, please discuss it in [GitHub Discussions](https://github.com/rishikeshsamant/Learn2Contribute/discussions)
 before starting your work.

## Submitting Content

To contribute content to Learn2Contribute, follow these steps:

1. **Create a New Branch**: Create a new branch on your local repository to work on your contribution.

2. **Write Your Content**: Use Jupyter Lab and Markdown to create your content in your local repository.

3. **Commit Your Changes**: Commit your changes to your local branch using Git. Here are the basic commands:

   ```markdown
   git add .
   git commit -m "Add your commit message here"
   ```
4. Push to Your Fork: Push your changes to your fork on GitHub using Git. Here's the command:

   ```markdown
   git push origin your-branch-name
   ```
   
5. Submit a Pull Request: To have your content merged into our project, you'll need to submit a pull request on GitHub. Here are the steps:

  - Go to your fork on GitHub and select the branch containing your changes.

  - Click on "New Pull Request."

  - Provide a detailed description of your changes and why they should be merged.

  - Review your changes and confirm the pull request.

## Creating Content Locally
To create content locally on your system, you can use Jupyter Lab, which we recommend for creating complex and interactive content. If you are new to Jupyter Lab, refer to the [Jupyter Lab Documentation](https://jupyterlab.readthedocs.io/en/stable/index.html) for guidance.

## Using Git and GitHub
To use Git and GitHub effectively for content contribution, make sure you have Git installed on your local machine. If you're new to Git, here are some basic commands to help you get started:

1. Clone a Repository: Use this command to clone your forked repository to your local machine:

   ```markdown
   git clone your-fork-repository-URL
   ```
   
2. Create a New Branch: Create a new branch for your content contribution:

   ```markdown
   git checkout -b your-branch-name
   ```
3. Check Current Branch: Verify the branch you're on:

   ```markdown
   git branch
   ```
4. Switch Branch: Switch between branches:

   ```markdown
   git checkout branch-name
   ```
5. Fetch and Pull Changes: Get the latest changes from the remote repository:

   ```markdown
   git fetch origin
   git pull origin branch-name
   ```
6. View Status: Check the status of your local repository:

   ```markdown
   git status
   ```
7. Undo Changes: Discard changes in your working directory:

   ```markdown
   git checkout -- file-name
   ```
8. Merge Changes: Merge changes from one branch into another:

   ```markdown
   git merge branch-name
   ```
For more advanced Git and GitHub usage, refer to our [Git Guide](version-control/git.md) and [GitHub Guide](collaboration/github.md).

## Copyright and Licensing
By contributing content to Learn2Contribute, you agree to the following:

All contributions are subject to the project's chosen license, which is [MIT License](MIT License). Your contributions will be covered by this license.

You retain the copyright to your contributions while also granting a license to the project to use and distribute your work.

By including "Learn2Contribute" in your contributions, you indicate your acceptance of these terms.

Your contributions to our project are greatly appreciated, and we value your commitment to creating high-quality content. Thank you for helping us build a valuable resource for our community.

If you have questions or need assistance, please reach out to us through GitHub Discussions
or by opening an issue.
