<div align="center">
  <h1>Learn2Contribute</h1>
  <strong>GitHub Guide</strong><br>
</div>
<br>

This is basic GitHub Guide to make you familiar with platform.

# Table of Contents
1. [Getting Started](#getting-started)
2. [Creating a GitHub Account](#creating-a-github-account)
3. [Setting Up Git](#setting-up-git)
4. [Creating a Repository](#creating-a-repository)
5. [Cloning a Repository](#cloning-a-repository)
6. [Making Changes to a GitHub Repository](#making-changes-to-a-github-repository)
7. [Creating Pull Requests](#creating-pull-requests)
8. [Reviewing Pull Requests](#reviewing-pull-requests)
9. [Merging Pull Requests](#merging-pull-requests)
10. [Handling Issues](#handling-issues)

# Getting Started

- What is GitHub?
  - GitHub is a platform for version control that helps teams manage and track changes to their projects.
  - It provides a centralized location for storing code, documents, and other project-related files.
  - GitHub makes collaboration easy by allowing multiple users to work on the same project simultaneously, track changes, and communicate effectively.

- Benefits of Using GitHub
  - Discuss the advantages of using GitHub, such as version control, collaboration, project management, and community support.
  - Mention how it can improve code quality, streamline development, and enhance transparency in your project.

# Creating a GitHub Account
Process of creating a GitHub account in more detail:

- Visit GitHub: Go to the GitHub website in your web browser.

- Sign Up: Click on the "Sign up" button to begin the registration process.

- Username and Email: Choose a username for your account and enter your email address. Your username will be your identity on GitHub, so choose it carefully.

- Password: Create a secure password to protect your account. GitHub will provide feedback on the password's strength.

- CAPTCHA: Complete any CAPTCHA or verification steps if prompted.

- Email Verification: Verify your email address by following the link sent to your email inbox.

- Choose a Plan: GitHub offers free plans for public repositories. Select the plan that best suits your needs.

- Welcome to GitHub: After completing the registration process, you'll be welcomed to GitHub.

- Profile Setup: Add a profile picture and provide some information about yourself. This step is optional but can make it easier for others to recognize you in the GitHub community.

- Two-Factor Authentication (2FA): For added security, consider setting up two-factor authentication. This provides an extra layer of protection for your account.

# Setting Up Git
Git is a version control system that interacts with GitHub.

- Install Git: Refer to Installing Git section in our [Git Guide](/version-control/git.md).

- Configure Git: Git needs to be configured with your GitHub credentials. To set the username and email that will be associated with your Git commits:

  ```shell
  git config --global user.name "Your Name"
  git config --global user.email "your.email@example.com"
  ```
- SSH Key (Optional): For added security and ease of authentication, consider generating an SSH key and linking it to your GitHub account. Provide instructions for creating an SSH key pair and adding the public key to your GitHub account.

# Creating a GitHub Repository

## Step 1: Sign in to GitHub

- Open your web browser and visit the GitHub website: [https://github.com](https://github.com).

- Sign in to your GitHub account if you're not already logged in.

## Step 2: Create a New Repository

- Click on the '+' sign in the top right corner of the GitHub page.

- Select "New repository" from the dropdown menu.

- Fill in the following information for your new repository:

   - **Repository name:** Enter a unique name for your repository. This will be part of your repository's URL (e.g., "my-new-repo").
   - **Description (optional):** Provide a brief description of your project.
   - **Visibility:** Choose whether the repository will be public (visible to anyone) or private (visible only to collaborators).
   - **Initialize this repository with a README:** Select this option to create an initial README file for your project. It's a good practice to include documentation.

-  Choose the appropriate repository settings based on your project's needs.

- Click the "Create repository" button.

Now that you have created a repository, you can begin adding and managing your project files, commit changes, and collaborate with others effectively.

# Cloning a GitHub Repository

## Step 1: Find the Repository

- Open your web browser and visit the GitHub website: [https://github.com](https://github.com).

- Sign in to your GitHub account if you're not already logged in.

- Navigate to the GitHub repository you want to clone.

## Step 2: Clone the Repository

- Click the "Code" button on the GitHub repository's page.

- Copy the repository's URL by clicking the clipboard icon next to the URL. It should look something like this: `https://github.com/username/repository-name.git`.

- Open your local terminal or command prompt.

- Navigate to the directory where you want to clone the repository.

- Clone the repository using the `git clone` command and the URL you copied:

   ```bash
   git clone https://github.com/username/repository-name.git
   ```
- Replace https://github.com/username/repository-name.git with the URL you copied.


# Making Changes to a GitHub Repository

In this section, you'll learn how to make changes to files within a GitHub repository, stage those changes, and commit them. This is a fundamental part of using version control and collaborating on software projects.

## Step 1: Make Changes

- Open your local development environment, such as a code editor or IDE.

- Locate the files you want to change within the cloned repository.

- Make your desired changes to the files.

## Step 2: Stage Changes

- Open your terminal or command prompt.

- Navigate to the root directory of your cloned repository.

- Use the `git status` command to see the changes you've made and which files are not yet staged:

   ```bash
   git status
   ```
- Stage the changes by using the git add command, specifying the files you want to include in the next commit. For example, to stage all changes, you can run:

  ```bash
  git add .
  ```
- To stage specific files, replace . with the file names.

# Step 3: Commit Changes
- Commit the staged changes along with a descriptive commit message using the git commit command:

  ```bash
  git commit -m "Add descriptive commit message here"
  ```
- Replace "Add descriptive commit message here" with a brief, informative message about the changes you made.

# Step 4: Push Changes
- Push your committed changes to the remote GitHub repository using the git push command:

  ```bash
  git push
  ```
- You may need to enter your GitHub username and password or use SSH authentication if not already set up.


# Creating Pull Requests

In this section, you'll learn how to create a pull request on GitHub to propose changes to a repository and request that they be reviewed and merged into the main branch.

## Step 1: Push Changes to Your Fork

- Open your terminal or command prompt.

- Navigate to the root directory of your cloned repository.

- Ensure your local repository is up to date with the remote repository by running the following command:

   ```bash
   git pull origin main
   ```
- Push your local changes to your forked repository on GitHub using the git push command:

  ```bash
  git push origin branch-name
  ```
- Replace branch-name with the name of the branch where you made your changes.

## Step 2: Create a Pull Request
- Open your web browser and visit your forked repository on GitHub.

- Click the "Pull requests" tab.

- Click the "New pull request" button.

- In the "Base repository" dropdown, select the original repository that you want to merge your changes into (typically, the upstream repository).

- In the "Base" branch dropdown, choose the branch into which you want to merge your changes (usually "main").

- In the "Compare" branch dropdown, select the branch where you made your changes.

- Click the "Create pull request" button.

- Provide a descriptive title and additional context in the comment box. Explain what your changes aim to achieve and why they should be merged.

## Step 3: Submit the Pull Request
- Review your pull request for accuracy and completeness.

- Click the "Create pull request" button again to submit it.


# Reviewing Pull Requests 

In this section, you'll learn how to review and provide feedback on pull requests in GitHub, helping maintainers and collaborators ensure the quality of code changes before merging them into the main branch.


## Step 1: Access the Pull Request

- Open your web browser and visit the GitHub repository where the pull request was submitted.

- Navigate to the "Pull requests" tab of the repository.

- Click on the pull request that you want to review.

## Step 2: Review Changes

- Examine the changes made in the pull request. You can view the files, commits, and any comments within the pull request.

- Review the code, documentation, or any other changes for correctness, completeness, and adherence to coding standards and project guidelines.

## Step 3: Comment on the Pull Request

- Add comments directly to the changes by clicking on lines of code and using the "+ " button that appears. Provide feedback, suggestions, or questions in your comments.

- If you have general feedback or comments not tied to specific lines of code, you can leave a comment in the conversation thread by scrolling to the "Conversation" tab and typing your comment.

## Step 4: Approve or Request Changes

- If you find the pull request satisfactory, you can approve it by clicking the "Review changes" button and selecting "Approve." Provide any final comments if needed.

- If you think changes are required before the pull request can be merged, you can request changes. Explain what needs to be fixed or improved, and the author will address the issues.

## Step 5: Submit the Review

- Once you've finished reviewing the pull request, click the "Submit review" button. You can choose to "Comment," "Approve," or "Request changes."

## Step 6: Congratulations!

You have successfully reviewed a pull request on GitHub. Your feedback and comments will help the author improve their changes, and the project maintainers can make informed decisions about merging the pull request.


Now that you've learned how to review pull requests, you can contribute to the collaborative development process by providing valuable feedback to your project's contributors.
# Merging Pull Requests 

In this guide, you'll learn how to merge pull requests on GitHub to incorporate proposed changes into the main branch of a repository.

## Step 1: Access the Pull Request

- Open your web browser and visit the GitHub repository where the pull request is located.

- Navigate to the "Pull requests" tab of the repository.

- Click on the pull request that you want to merge.

## Step 2: Review Changes (Optional)

- Examine the changes made in the pull request. You can view the files, commits, and comments within the pull request.

- Review the code, documentation, or any other changes to ensure they meet your project's requirements and standards.

## Step 3: Merge the Pull Request

- If you are satisfied with the changes and the pull request is ready to be merged, click the "Merge pull request" button.

- Choose the merge method:

   - **Create a merge commit:** This creates a new commit to merge the changes. It maintains a clear history but can result in additional commits.
   - **Squash and merge:** Combines all the pull request's commits into a single commit. This is useful for maintaining a cleaner commit history.
   - **Rebase and merge:** Applies the pull request's commits directly to the main branch. It provides a clean and linear commit history.

- Optionally, confirm the merge by clicking the "Confirm merge" button.

## Step 4: Delete Branch (Optional)

- After merging the pull request, you can choose to delete the branch associated with the pull request by clicking the "Delete branch" button. This keeps your repository tidy.


Now that you've learned how to merge pull requests, you can effectively manage contributions and keep your project up to date with the latest changes.


# Handling Issues 

In this guide, you'll learn how to manage and address issues on GitHub, which are used to track and discuss problems, enhancements, tasks, and other topics related to your project.

## Step 1: Access the Issues Tab

- Open your web browser and visit the GitHub repository where you want to handle issues.

- Click on the "Issues" tab in the repository's navigation menu.

## Step 2: Create a New Issue

- To create a new issue, click the "New issue" button.

- Fill in the issue details:
   
   - **Title:** Provide a clear and descriptive title for the issue.
   - **Comment:** Elaborate on the issue, including what it entails and any relevant context.
   - **Labels (optional):** Add labels to categorize the issue, such as "bug," "enhancement," or "documentation."
   - **Assignees (optional):** Assign the issue to one or more collaborators.
   - **Projects (optional):** Link the issue to a specific project board.

- Click the "Submit new issue" button to create the issue.

## Step 3: Comment on Existing Issues

- To comment on an existing issue, click on the issue you want to engage with.

- Scroll down to the comment section and add your comment. You can discuss, provide solutions, or offer feedback in the comments.

- Click "Comment" to post your comment.

## Step 4: Assign, Label, and Milestone (Optional)

- If you are a collaborator or have the appropriate permissions, you can assign the issue to someone, add labels, or associate it with a milestone using the buttons on the right side of the issue page.

## Step 5: Close or Resolve the Issue

- Once the issue is resolved or the task is completed, you can close it:

    - If you are the issue creator or have permissions to close issues, click the "Close issue" button at the bottom of the issue page.
    - If the issue is linked to a pull request, it may be automatically closed when the pull request is merged.

- To reopen a closed issue, click the "Reopen issue" button.

Now that you've learned how to manage issues, you can effectively track and address tasks, bugs, and feature requests within your project. <br/>



Congratulations on completing this guide! You've learned essential GitHub skills, from creating repositories to merging pull requests and managing issues. GitHub is a powerful platform that fosters collaboration and version control in software development.

Remember to explore additional resources for further learning and to deepen your understanding of GitHub:

- [GitHub Documentation](https://docs.github.com): Comprehensive guides and references.
- [GitHub Learning Lab](https://lab.github.com): Interactive courses to enhance your GitHub skills.
- [GitHub Community](https://github.community): Engage with a vast community of GitHub users and experts.

We encourage you to continue your journey in mastering GitHub, as it's a valuable tool for teamwork and open-source contributions. Keep exploring, collaborating, and making a positive impact on the world of software development.














